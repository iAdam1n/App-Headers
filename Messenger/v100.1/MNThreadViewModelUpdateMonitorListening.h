/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadViewModelUpdateMonitorListening <NSObject>
@required
-(void)viewModelForThreadSummaryWithKeyWasUpdated:(id)arg1 isDueToViewerAction:(BOOL)arg2;
-(void)threadWithKeyWasDeleted:(id)arg1 isDueToViewerAction:(BOOL)arg2;
-(void)messageSetForThreadWithKeyWasUpdated:(id)arg1 isDueToIncomingMessageInsert:(BOOL)arg2;
-(void)allSecureThreadsWereUpdated;

@end
