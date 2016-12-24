/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAnalyticsDiagnosticInfo : NSObject {

	unsigned long long _persistSingleLogFailureCount;
	unsigned long long _persistSingleLogFailureBatchID;
	unsigned long long _combineMultiBatchFailureCount;
	unsigned long long _combineMultiBatchFailureBatchID;
	unsigned long long _deletedFileCount_networkFailure;
	unsigned long long _deletedFileBatchID_networkFailure;
	unsigned long long _deletedFileCount_illegalJson;
	unsigned long long _deletedFileBatchID_illegalJson;
	unsigned long long _deletedFileCount_tooManyFiles;
	unsigned long long _deletedFileBatchID_tooManyFiles;

}
-(id)getDiagnosticInfo;
-(void)increaseDiagnosticCount:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end
