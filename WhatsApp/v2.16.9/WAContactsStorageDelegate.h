/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
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

