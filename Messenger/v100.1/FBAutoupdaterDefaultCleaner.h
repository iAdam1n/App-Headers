/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterCleaner.h>

@protocol OS_dispatch_queue;
@class FBAutoupdaterHost, NSFileManager, NSString, NSObject;

@interface FBAutoupdaterDefaultCleaner : NSObject <FBAutoupdaterCleaner> {

	FBAutoupdaterHost* _host;
	NSFileManager* _fileManager;
	NSString* _trashPath;
	NSObject*<OS_dispatch_queue> _trashQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBAutoupdaterHost * host; 
-(void)cleanUpAfterUpdateInstallationAttempt;
-(BOOL)_createPathIfNeeded:(id)arg1 error:(id*)arg2 ;
-(void)removeUnappliedUpdates;
-(FBAutoupdaterHost *)host;
-(id)initWithHost:(id)arg1 ;
-(void)removePath:(id)arg1 ;
@end
