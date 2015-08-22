/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSFileManager, NSUserDefaults;

@interface FBVersionedFileHandler : NSObject {

	NSFileManager* _fileManager;
	NSUserDefaults* _userDefaults;

}
-(id)_openFileWithUrl:(id)arg1 configurationDelegate:(id)arg2 ;
-(unsigned long long)_checkFileBeingConfiguredByDelegate:(id)arg1 version:(id)arg2 ;
-(BOOL)_createSchemaAndAnnounceForFileBeingConfiguredByDelegate:(id)arg1 listener:(id)arg2 ;
-(id)_rebuildFile:(id)arg1 listener:(id)arg2 configurationDelegate:(id)arg3 ;
-(void)_executeDiscardFileAtUrl:(id)arg1 listener:(id)arg2 ;
-(id)initFileManager:(id)arg1 userDefaults:(id)arg2 ;
-(id)openAndPrepareVersionedFile:(id)arg1 configurationDelegate:(id)arg2 configurationListener:(id)arg3 ;
-(void)discardFile:(id)arg1 ;
@end
