/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WAContactsStorageDelegate
@required
-(void)contactsStorageDidGenerateFavorites:(id)arg1;
-(void)contactsStorageDidFailToGenerateFavorites:(id)arg1;
-(void)contactsStorageDidUpdateStatus:(id)arg1;
-(void)contactsStorageDidUpdateContacts:(id)arg1;
-(void)contactsStorageDidUpdateFavorites:(id)arg1;
-(void)contactsStorage:(id)arg1 didAddOrUpdateContacts:(id)arg2 didRemoveJIDs:(id)arg3 removeMissingJIDs:(BOOL)arg4;

@end
