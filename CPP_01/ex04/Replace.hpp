/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:02:25 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/18 23:11:43 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

class FilesManip {

    public:
        FilesManip();
        ~FilesManip();

        void            setInfile();
        void            setOutfile();
        void            setFilename(std::string);
        void            setToFind(std::string);
        void            setReplaceWith(std::string);
        void            replace(std::string str1, std::string str2);

    private:
        std::ifstream   _infile;
        std::ofstream   _outfile;
        std::string     _filename;
        std::string     _toFind;
        std::string     _replaceWith;
        
};
