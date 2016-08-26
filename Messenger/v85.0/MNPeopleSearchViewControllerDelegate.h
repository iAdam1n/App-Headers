/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleSearchViewControllerDelegate <NSObject>
@required
-(BOOL)peopleSearchViewControllerShouldIncludeGroup:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludeAddressBookContacts:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludePages:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludeBlendedResults:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludeNicknameResults:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldSearchServer:(id)arg1;
-(id)searchTextForPeopleSearchViewController:(id)arg1;
-(id)pickedUserIdsForPeopleSearchViewController:(id)arg1;
-(void)peopleSearchViewControllerDidFinishSearch:(id)arg1;
-(BOOL)peopleSearchViewController:(id)arg1 shouldShowResult:(id)arg2;
-(BOOL)peopleSearchViewController:(id)arg1 shouldSelectResultWhenTapped:(id)arg2;
-(void)peopleSearchViewController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3;
-(void)peopleSearchViewController:(id)arg1 didTapActionButtonForContact:(id)arg2;
-(unsigned long long)surfaceForPeopleSearchView;

@end
