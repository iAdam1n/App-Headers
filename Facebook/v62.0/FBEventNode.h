/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>

@class FBComponentHostingNode, FBConsistentLookasideCacheObservationHandle, FBFeedToolbox, FBMemEvent;

@interface FBEventNode : ASDisplayNode {

	FBComponentHostingNode* _hostingNode;
	FBConsistentLookasideCacheObservationHandle* _CLCHandle;
	FBFeedToolbox* _toolbox;
	FBMemEvent* _event;

}
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)_staticInitialize;
-(void)_eventStatusChanged:(id)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithEvent:(id)arg1 toolbox:(id)arg2 ;
-(void)dealloc;
-(void)layout;
-(void)update;
@end
