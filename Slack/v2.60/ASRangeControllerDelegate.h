/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ASRangeControllerDelegate <NSObject>
@optional
-(void)rangeController:(id)arg1 willInsertNodesAtIndexPaths:(id)arg2 withAnimationOption:(unsigned long long)arg3;
-(void)rangeController:(id)arg1 willDeleteNodesAtIndexPaths:(id)arg2 withAnimationOption:(unsigned long long)arg3;
-(void)rangeController:(id)arg1 willInsertSectionsAtIndexSet:(id)arg2 withAnimationOption:(unsigned long long)arg3;
-(void)rangeController:(id)arg1 willDeleteSectionsAtIndexSet:(id)arg2 withAnimationOption:(unsigned long long)arg3;

@required
-(id)rangeControllerVisibleNodeIndexPaths:(id)arg1;
-(CGSize*)rangeControllerViewportSize:(id)arg1;
-(void)rangeControllerBeginUpdates:(id)arg1;
-(void)rangeControllerEndUpdates:(id)arg1 completion:(/*^block*/id)arg2;
-(id)rangeController:(id)arg1 nodesAtIndexPaths:(id)arg2;
-(void)rangeController:(id)arg1 didInsertNodesAtIndexPaths:(id)arg2 withAnimationOption:(unsigned long long)arg3;
-(void)rangeController:(id)arg1 didDeleteNodesAtIndexPaths:(id)arg2 withAnimationOption:(unsigned long long)arg3;
-(void)rangeController:(id)arg1 didInsertSectionsAtIndexSet:(id)arg2 withAnimationOption:(unsigned long long)arg3;
-(void)rangeController:(id)arg1 didDeleteSectionsAtIndexSet:(id)arg2 withAnimationOption:(unsigned long long)arg3;

@end

