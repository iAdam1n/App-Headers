/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/SyncHandler.h>

@interface TemplatesSyncHandler : SyncHandler
-(BOOL)shouldSendToCloudOnUserDefaultsChange;
-(void)finishedSendingToCloudAfterUserDefaultsChange;
-(BOOL)requiresSyncing:(id)arg1 remoteObject:(id)arg2 ;
-(id)mergeChangeFromLocalObject:(id)arg1 remoteObject:(id)arg2 ;
-(void)finishedProcessingRemoteMerge;
-(id)keyToMonitor;
-(id)mergedTemplateGroupWithLeftGroup:(id)arg1 rightGroup:(id)arg2 ;
@end

