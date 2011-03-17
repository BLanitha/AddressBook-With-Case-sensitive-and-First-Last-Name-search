#ifndef VIEW_ADDRESSBOOKVIEW_H
#define VIEW_ADDRESSBOOKVIEW_H

/***********************************************************************
    Class: AddressBookView

    Author: Phil Grohe

    Interface for the application's views to implement.

    This class is the View in our MVC architecture.  It is the Observer
    to AddressBookModel's Subject.
***********************************************************************/
class AddressBookView
{
    public:
        
        virtual ~AddressBookView() {};

        //Model has changed, update info in UI
        virtual bool updateView(void) = 0;
        
};

#endif
