/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSKeychain : NSObject
+(id)passwordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(id)passwordDataForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
+(BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
+(BOOL)setPasswordData:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
+(id)allAccounts:(id*)arg1 ;
+(id)accountsForService:(id)arg1 error:(id*)arg2 ;
+(id)passwordForService:(id)arg1 account:(id)arg2 ;
+(id)passwordDataForService:(id)arg1 account:(id)arg2 ;
+(BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 ;
+(BOOL)setPasswordData:(id)arg1 forService:(id)arg2 account:(id)arg3 ;
+(void*)accessibilityType;
+(void)setAccessibilityType:(void*)arg1 ;
+(id)allAccounts;
+(id)accountsForService:(id)arg1 ;
@end
