/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAvatarPickerControllerDelegate <NSObject>
@optional
-(void)avatarPickerDidCancel:(id)arg1;
-(void)avatarPickerWillRemoveObject:(id)arg1;
-(void)avatarPickerValueDidChange:(id)arg1;
-(void)avatarPicker:(id)arg1 searchFieldDidChangeHeight:(id)arg2;
-(void)avatarPicker:(id)arg1 searchFieldKeyboardReturnButtonPressed:(id)arg2;

@required
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;

@end
