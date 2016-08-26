/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/BubbleSelfRefreshDriveStar.h>

@class Billboard3DPrimitive;

@interface BackgroundDriveStar : BubbleSelfRefreshDriveStar {

	vector<BillboardPrimitive *, std::__1::allocator<BillboardPrimitive *> >* billboards;
	Billboard3DPrimitive* topLine;

}

@property (nonatomic,retain) Billboard3DPrimitive * topLine; 
-(void)handleVerticalCameraScroll:(id)arg1 ;
-(int)billboardList:(id*)arg1 ;
-(Billboard3DPrimitive *)topLine;
-(void)setTopLine:(Billboard3DPrimitive *)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)background;
-(id)initWithModel:(id)arg1 ;
@end
