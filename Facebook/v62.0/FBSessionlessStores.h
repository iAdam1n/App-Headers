/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSessionlessStores : NSObject
+(id)persistentKeyValueStoreForIdentifier:(unsigned)arg1 ;
+(id)managerFactory;
+(id)diskStoreForIdentifier:(unsigned)arg1 ;
+(id)diskCacheForIdentifier:(unsigned)arg1 ;
+(id)diskStoreForIdentifier:(unsigned)arg1 groupIdentifier:(id)arg2 ownerContext:(BOOL)arg3 ;
+(id)diskStoreForConfig:(id)arg1 ;
+(id)persistentKeyValueStoreForConfig:(id)arg1 ;
+(id)diskCacheForConfig:(id)arg1 ;
+(id)diskStoreForConfig:(id)arg1 groupIdentifier:(id)arg2 ownerContext:(BOOL)arg3 ;
@end
