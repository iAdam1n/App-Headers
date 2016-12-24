/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBFeedSecondaryActionHandler <NSObject>
@property (nonatomic,copy,readonly) NSString * handlerName; 
@optional
-(id)actionForFeedUnit:(id)arg1 trackingCodes:(id)arg2 context:(id)arg3 actionName:(id)arg4;
-(NSString *)handlerName;

@required
-(id)actionsForFeedUnit:(id)arg1 element:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4;

@end
