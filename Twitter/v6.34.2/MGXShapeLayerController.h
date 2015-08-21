/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/MGXLayerController.h>

@class NSMutableArray;

@interface MGXShapeLayerController : MGXLayerController {

	NSMutableArray* _vectorGroups;
	NSMutableArray* _vectorLayerControllers;
	NSMutableArray* _vectorShapeLayerControllers;

}
-(void)setDebugRendering:(BOOL)arg1 ;
-(void)playAnimationFromTime:(double)arg1 toTime:(double)arg2 withDuration:(double)arg3 ;
-(id)initWithMotionGraphicsLayer:(id)arg1 ;
-(void)updateLayer;
-(void)addControllersForGroup:(id)arg1 ;
-(void)addVectorShapeLayersForGroup:(id)arg1 ;
-(void)addControllersForGroup:(id)arg1 withParentGroup:(id)arg2 ;
-(id)subGroupsOfGroup:(id)arg1 ;
-(void)setTime:(double)arg1 ;
@end

