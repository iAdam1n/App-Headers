/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDLogFileManager <NSObject>
@property (assign) unsigned long long maximumNumberOfLogFiles; 
@optional
-(void)didArchiveLogFile:(id)arg1;
-(void)didRollAndArchiveLogFile:(id)arg1;

@required
-(unsigned long long)maximumNumberOfLogFiles;
-(id)sortedLogFileInfos;
-(id)logsDirectory;
-(id)unsortedLogFilePaths;
-(id)unsortedLogFileInfos;
-(id)unsortedLogFileNames;
-(id)sortedLogFilePaths;
-(id)sortedLogFileNames;
-(id)createNewLogFile;
-(void)setMaximumNumberOfLogFiles:(unsigned long long)arg1;

@end
