/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPeopleSearchViewControllerDelegate <NSObject>
@required
-(BOOL)peopleSearchViewControllerShouldIncludeGroup:(id)arg1;
-(BOOL)peopleSearchViewControllerShouldIncludeAddressBookContacts:(id)arg1;
-(unsigned long long)peopleSearchViewControllerPageFilterRule:(id)arg1;
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
