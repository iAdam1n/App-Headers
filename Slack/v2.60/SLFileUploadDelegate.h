/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SLFileUploadDelegate <NSObject>
@optional
-(void)fileUploadManager:(id)arg1 didUpload:(id)arg2;
-(void)fileUploadManager:(id)arg1 didFail:(id)arg2;
-(void)fileUploadManager:(id)arg1 didProgressStart:(id)arg2;
-(void)fileUploadManager:(id)arg1 didProgressEnd:(id)arg2;
-(void)fileUploadManagerWillShowUploadAlert:(id)arg1;
-(void)fileUploadManagerWillShowPhotoChooser:(id)arg1;
-(void)fileUploadManagerDidFinishShowingChooser:(id)arg1;
-(id)fileUploadManagerGenericChannelId:(id)arg1;

@end

