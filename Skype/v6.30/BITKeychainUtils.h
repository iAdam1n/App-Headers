/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BITKeychainUtils : NSObject
+(BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 accessibility:(void*)arg5 error:(id*)arg6 ;
+(id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3 ;
+(BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)purgeItemsForServiceName:(id)arg1 error:(id*)arg2 ;
@end
