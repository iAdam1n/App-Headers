/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@interface FBRotatingComponent : CKCompositeComponent {

	double _angle;

}

@property (nonatomic,readonly) double angle;              //@synthesize angle=_angle - In the implementation block
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 component:(id)arg2 angle:(double)arg3 identifier:(id)arg4 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(double)angle;
@end
