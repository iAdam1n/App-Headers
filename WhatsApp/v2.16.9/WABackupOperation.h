/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WABackupOperation <NSObject>
@property (readonly) BOOL succeeded; 
@property (readonly) unsigned long long completedSteps; 
@property (readonly) unsigned long long totalSteps; 
@required
-(unsigned long long)completedSteps;
-(unsigned long long)totalSteps;
-(BOOL)succeeded;

@end
