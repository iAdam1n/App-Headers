/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMessageVideoAttachmentPreparationListener <NSObject>
@required
-(void)willComputeHash;
-(void)didComputeHash:(id)arg1;
-(void)willQueryFbId;
-(void)didQueryFbId:(id)arg1;
-(void)willResumeWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2;
-(void)willUploadWithContentSource:(id)arg1 contentSize:(unsigned long long)arg2;
-(void)didProgressUploadTo:(float)arg1;
-(void)didFailToUploadWithError:(id)arg1 metrics:(id)arg2;
-(void)didCompleteUploadWithFbId:(id)arg1 metrics:(id)arg2;
-(void)didCancelUploadWithMetrics:(id)arg1;
-(void)didPrepare;
-(void)didFailToPrepareWithError:(id)arg1;
-(void)didCancelPreparation;
-(void)willPrepareVideoContent:(id)arg1 forMessageOfflineId:(id)arg2;
-(void)willExport;
-(void)didExportData:(id)arg1 toLocalURL:(id)arg2;
-(void)didFailToExportWithError:(id)arg1;
-(void)didEstimateFileSize:(long long)arg1;
-(void)didProgressExportTo:(float)arg1;

@end
