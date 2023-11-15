#pragma once
#include <string>
class Worker
{
private:
	std::string m_fio;
	std::string m_post;
	int m_year_of_admission_to_work;

public:

    Worker();
    Worker(std::string& fio, std::string& post, int year);
    Worker(const Worker& worker);
    ~Worker();

    std::string getFio() const;
    std::string getPost() const;
    int getYearOfAdmissionToWork() const;

    void setFio(const std::string& fio);
    void setPost(const std::string& post);
    void setYearOfAdmissionToWork(int year);

    friend std::istream& operator>>(std::istream& input, Worker& worker);
    friend std::ostream& operator<<(std::ostream& output, const Worker& worker);

    void save(std::string path);
};
