/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBComponentCellAppearanceEventListenerAnnouncer;

@interface FBComponentCellAppearanceTracker : NSObject {

	FBComponentCellAppearanceEventListenerAnnouncer* _announcer;
	map<UIView *, id<NSObject>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, id<NSObject> > > >* _cellToModelMap;
	map<id<NSObject>, UIView *, std::__1::less<id<NSObject> >, std::__1::allocator<std::__1::pair<const id<NSObject>, UIView *> > >* _modelToCellMap;

}
-(void)willVendCell:(id)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)didEndDisplayingCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)init;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
