/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNGroupPhotoUploaderListener.h>

@class NSString;

@interface MNGroupPhotoUploaderListenerAnnouncer : FBAnnouncerBase <MNGroupPhotoUploaderListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)groupPhotoUpload:(id)arg1 startedForGroupThreadKey:(id)arg2 ;
-(void)groupPhotoUpload:(id)arg1 finishedForGroupThreadKey:(id)arg2 ;
-(void)groupPhotoUpload:(id)arg1 failedForGroupThreadKey:(id)arg2 withError:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

