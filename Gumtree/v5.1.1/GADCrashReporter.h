/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GADCrashReporter : NSObject {

	/*function pointer*/void* _previousUncaughtExceptionHandler;
	BOOL _reportingEnabled;

}

@property (assign,nonatomic) BOOL reportingEnabled;              //@synthesize reportingEnabled=_reportingEnabled - In the implementation block
+(id)sharedInstance;
-(void)setReportingEnabled:(BOOL)arg1 ;
-(void)reportUncaughtException:(id)arg1 ;
-(void)handleUncaughtException:(id)arg1 ;
-(BOOL)reportingEnabled;
-(id)init;
@end
