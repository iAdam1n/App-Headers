/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CKComponentLifecycleManager, NSString, NSIndexPath;


@protocol CKComponentPreparationItem <NSObject>
@property (nonatomic,readonly) id<NSObject> replacementModel; 
@property (nonatomic,readonly) CKComponentLifecycleManager * lifecycleManager; 
@property (nonatomic,readonly) CGSize oldSize; 
@property (nonatomic,copy,readonly) NSString * UUID; 
@property (nonatomic,copy,readonly) NSIndexPath * sourceIndexPath; 
@property (nonatomic,copy,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) unsigned long long changeType; 
@property (getter=isPassthrough,nonatomic,readonly) BOOL passthrough; 
@property (nonatomic,readonly) id<NSObject> context; 
@required
-(CKComponentLifecycleManager *)lifecycleManager;
-(NSIndexPath *)destinationIndexPath;
-(BOOL)isPassthrough;
-(id<NSObject>)replacementModel;
-(id<NSObject>)context;
-(NSString *)UUID;
-(CGSize)oldSize;
-(unsigned long long)changeType;
-(NSIndexPath *)sourceIndexPath;

@end
