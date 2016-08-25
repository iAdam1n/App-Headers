/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WASynchronousBackupOperation.h>

@class NSString;

@interface WATarFileOperation : WASynchronousBackupOperation {

	unsigned long long _tarStepsComplete;
	unsigned long long _stepsToComplete;
	BOOL _succeeded;
	NSArray* _files;
	NSString* _prefix;
	BOOL _useOptimizedSearching;
	BOOL _optimizeFileSystem;
	BOOL _didWorkaroundFail;
	NSString* _path;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign) BOOL useOptimizedSearching;               //@synthesize useOptimizedSearching=_useOptimizedSearching - In the implementation block
@property (assign) BOOL optimizeFileSystem;                  //@synthesize optimizeFileSystem=_optimizeFileSystem - In the implementation block
@property (assign) BOOL didWorkaroundFail;                   //@synthesize didWorkaroundFail=_didWorkaroundFail - In the implementation block
@property (copy) id completion;                              //@synthesize completion=_completion - In the implementation block
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(unsigned long long)completedSteps;
-(unsigned long long)totalSteps;
-(id)initWithPath:(id)arg1 fileList:(NSArray*)arg2 commonPrefix:(id)arg3 ;
-(void)setUseOptimizedSearching:(BOOL)arg1 ;
-(void)setOptimizeFileSystem:(BOOL)arg1 ;
-(BOOL)didWorkaroundFail;
-(BOOL)useOptimizedSearching;
-(void)setDidWorkaroundFail:(BOOL)arg1 ;
-(BOOL)optimizeFileSystem;
-(NSString *)path;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)run;
-(BOOL)succeeded;
@end

