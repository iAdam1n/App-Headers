/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BITKeychainUtils : NSObject
+(BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 accessibility:(void*)arg5 error:(id*)arg6 ;
+(id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3 ;
+(BOOL)purgeItemsForServiceName:(id)arg1 error:(id*)arg2 ;
@end
