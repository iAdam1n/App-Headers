/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:20 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableSet, NSFileManager, NSString;

@interface FBBreakpadExceptionHandler : NSObject {

	int _exceptionPid;
	NSMutableSet* breakpadExtraParameters;
	NSFileManager* _fileManager;
	void* _breakpad;
	NSString* _exceptionDirectory;

}

@property (nonatomic,copy,readonly) NSString * exceptionDirectory;              //@synthesize exceptionDirectory=_exceptionDirectory - In the implementation block
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 exceptionDirectory:(id)arg5 processId:(int)arg6 ;
-(void)setExceptionInfoString:(id)arg1 forKey:(id)arg2 ;
-(int)crashReportCount;
-(id)latestBreakpadCrashReport;
-(void)tearDownExceptionHandlers;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 product:(id)arg3 buildRevision:(id)arg4 ;
-(BOOL)initBreakpadWithInfo:(id)arg1 ;
-(void)breakpadAddUploadParameterForKey:(id)arg1 withValue:(id)arg2 ;
-(id)latestBreakpadCrashReportWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_exceptionFilename:(id)arg1 ;
-(void)process:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)processReports:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)breakpadSetupExtra;
-(long long)compareFileByCreationDate:(id)arg1 withFile:(id)arg2 inDirectory:(id)arg3 ;
-(void)breakpadCleanExtra:(id)arg1 ;
-(id)generateExtraFileName;
-(id)breakpadCopyLargeParams;
-(void)breakpadWriteParameterForKey:(id)arg1 withValue:(id)arg2 toFile:(id)arg3 ;
-(NSString *)exceptionDirectory;
-(id)initWithUrl:(id)arg1 exceptionParams:(id)arg2 ;
-(void)setReportUrl:(id)arg1 ;
-(void)breakpadGenerateReportWithParams:(id)arg1 ;
-(void)dealloc;
-(void)send;
-(void)process:(id)arg1 ;
@end

