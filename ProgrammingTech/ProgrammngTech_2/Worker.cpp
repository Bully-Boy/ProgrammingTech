#include "Worker.h"
#include <iostream>
#include <string>
#include <fstream>

Worker::Worker() {std::cin >> *this;}

Worker::Worker(std::string& fio, std::string& post, int year):
    m_fio(fio), m_post(post), m_year_of_admission_to_work(year){}

Worker::Worker(const Worker& worker):
    m_fio(worker.m_fio), m_post(worker.m_post), m_year_of_admission_to_work(worker.m_year_of_admission_to_work){}

Worker::~Worker(){}

std::string Worker::getFio() const              {return m_fio;}
std::string Worker::getPost() const             {return m_post;}
int Worker::getYearOfAdmissionToWork() const    {return m_year_of_admission_to_work;}

void Worker::setFio(const std::string& fio)     {m_fio = fio;}
void Worker::setPost(const std::string& post)   {m_post = post;}
void Worker::setYearOfAdmissionToWork(int year) {m_year_of_admission_to_work = year;}

std::istream& operator>>(std::istream& input, Worker& worker)
{
    std::cin.ignore(32767, '\n');
    
    std::cout << "\nEnter FIO: ";
    std::getline(input, worker.m_fio);

    std::cout << "\nEnter Post: ";
    std::getline(input, worker.m_post);

    std::cout << "\nEnter Year of Admission to Work: ";
    input >> worker.m_year_of_admission_to_work;

    //input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return input;
}
std::ostream& operator<<(std::ostream& output, const Worker& worker)
{
    output << "FIO: " << worker.m_fio << "\n";
    output << "Post: " << worker.m_post << "\n";
    output << "Year of Admission to Work: " << worker.m_year_of_admission_to_work << "\n";

    return output;
}

void Worker::save(std::string path)
{

    std::ofstream file;
    file.open(path, std::ios::app);
    if (!file) {
        std::cout << "\033[91mError while opening file " << path << " to load data.\033[0m";
        return;
    }
    file
        << "Name " << m_fio << std::endl
        << "Post " << m_post << std::endl
        << "Year " << m_year_of_admission_to_work << std::endl
        << std::endl;

    //file
    //    << m_fio << std::endl
    //    << m_post << std::endl
    //    << m_year_of_admission_to_work << std::endl;

    file.close();
}