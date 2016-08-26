/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAutoupdaterDeltaUpdateApplier.h>

@class NSFileManager, NSString;

@interface FBAutoupdaterDefaultDeltaUpdateApplier : NSObject <FBAutoupdaterDeltaUpdateApplier> {

	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFileManager:(id)arg1 ;
-(id)_readDeltaUpdateManifestAtUpdatePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)addFileAtPath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeFileAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)patchFileAtPath:(id)arg1 patchPath:(id)arg2 checksum:(id)arg3 size:(id)arg4 error:(id*)arg5 ;
-(BOOL)applyDeltaUpdate:(id)arg1 atPath:(id)arg2 source:(id)arg3 destination:(id)arg4 error:(id*)arg5 ;
-(id)init;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
@end
