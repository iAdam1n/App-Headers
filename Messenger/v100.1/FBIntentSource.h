/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIView;

@interface FBIntentSource : NSObject {

	SCD_Union_FB542 _location;
	unsigned long long _type;
	UIView* _view;

}

@property (nonatomic,__weak,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
+(id)sourceForRect:(CGRect)arg1 inView:(id)arg2 ;
+(id)sourceForPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(CGPoint)pointInView:(id)arg1 ;
-(CGRect)rectInView:(id)arg1 ;
-(UIView *)view;
@end
