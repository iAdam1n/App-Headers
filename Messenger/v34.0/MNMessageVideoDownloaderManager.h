/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNVideoExporterDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol FBProvider;
@class NSMutableDictionary, FBMMessageVideoDownloadListenerAnnouncer, NSString;

@interface MNMessageVideoDownloaderManager : NSObject <MNVideoExporterDelegate, FBSessionClassProvidable> {

	NSMutableDictionary* _messagesToVideoDownloaders;
	id<FBProvider> _videoExporterProvider;
	FBMMessageVideoDownloadListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)videoExporter:(id)arg1 didFinishExportingToFile:(id)arg2 fromContentUrl:(id)arg3 ;
-(void)videoExporter:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoExporter:(id)arg1 didDownloadWithProgress:(double)arg2 ;
-(id)_messageIdForExporter:(id)arg1 ;
-(void)downloadVideoForMessage:(id)arg1 videoAttachment:(id)arg2 writeToFile:(BOOL)arg3 ;
-(void)cancelVideoDownloadForMessage:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
