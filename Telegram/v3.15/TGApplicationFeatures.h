/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGApplicationFeatures : NSObject
+(BOOL)isGroupCreationEnabled:(id*)arg1 ;
+(BOOL)isGroupLarge:(unsigned long long)arg1 ;
+(void)_storeCachedFeatures;
+(BOOL)_isFeatureEnabledForIdentifier:(id)arg1 disabledMessage:(id*)arg2 ;
+(void)_setFeatureEnabledForIdentifier:(id)arg1 enabled:(BOOL)arg2 disabledMessage:(id)arg3 ;
+(void)setLargeGroupMemberCountLimit:(unsigned long long)arg1 ;
+(void)batchUpdate:(/*^block*/id)arg1 ;
+(void)rawUpdate:(id)arg1 ;
+(BOOL)isPhotoUploadEnabledForPeerType:(int)arg1 disabledMessage:(id*)arg2 ;
+(BOOL)isFileUploadEnabledForPeerType:(int)arg1 disabledMessage:(id*)arg2 ;
+(BOOL)isAudioUploadEnabledForPeerType:(int)arg1 disabledMessage:(id*)arg2 ;
+(BOOL)isTextMessageEnabledForPeerType:(int)arg1 disabledMessage:(id*)arg2 ;
+(BOOL)isBroadcastCreationEnabled:(id*)arg1 ;
+(void)setIsPhotoUploadEnabledForPeerType:(int)arg1 enabled:(BOOL)arg2 disabledMessage:(id)arg3 ;
+(void)setIsFileUploadEnabledForPeerType:(int)arg1 enabled:(BOOL)arg2 disabledMessage:(id)arg3 ;
+(void)setIsAudioUploadEnabledForPeerType:(int)arg1 enabled:(BOOL)arg2 disabledMessage:(id)arg3 ;
+(void)setIsTextMessageEnabledForPeerType:(int)arg1 enabled:(BOOL)arg2 disabledMessage:(id)arg3 ;
+(void)setIsPhotoGroupCreationEnabled:(BOOL)arg1 disabledMessage:(id)arg2 ;
+(void)setIsBroadcastCreationEnabled:(BOOL)arg1 disabledMessage:(id)arg2 ;
@end
