/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMultiPeoplePickerViewControllerDelegate <NSObject>
@optional
-(void)multiPeoplePickerViewController:(id)arg1 didToggleContact:(id)arg2 selected:(BOOL)arg3;
-(void)multiPeoplePickerViewController:(id)arg1 didTapSecondaryActionButtonForContact:(id)arg2;
-(BOOL)multiPeoplePickerViewController:(id)arg1 shouldShowPersonFromSearch:(id)arg2;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3;
-(id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1;
-(void)multiPeoplePickerViewControllerDidTapBlockingUI:(id)arg1;
-(void)multiPeoplePickerViewController:(id)arg1 didSelectSuggestionsFilteringInviteContactsTypeWithIndex:(long long)arg2;
-(void)multiPeoplePickerViewController:(id)arg1 didAudioCallContacts:(id)arg2;
-(void)multiPeoplePickerViewController:(id)arg1 didVideoCallContacts:(id)arg2;

@required
-(void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2;

@end
