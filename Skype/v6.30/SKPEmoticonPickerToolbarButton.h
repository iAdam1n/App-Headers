/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/MKButton.h>

@class SKPEmoticonPickerToolbarItem, SKPUnconsumedEmoticonsBadgeView;

@interface SKPEmoticonPickerToolbarButton : MKButton {

	SKPEmoticonPickerToolbarItem* _toolbarItem;
	SKPUnconsumedEmoticonsBadgeView* _badgeView;

}

@property (nonatomic,retain) SKPEmoticonPickerToolbarItem * toolbarItem;               //@synthesize toolbarItem=_toolbarItem - In the implementation block
@property (nonatomic,retain) SKPUnconsumedEmoticonsBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
+(id)keyPathsToObserve;
-(void)startObservingToolbarItem;
-(SKPEmoticonPickerToolbarItem *)toolbarItem;
-(void)stopObservingToolbarItem;
-(id)initWithToolbarItem:(id)arg1 ;
-(void)setToolbarItem:(SKPEmoticonPickerToolbarItem *)arg1 ;
-(void)dealloc;
-(SKPUnconsumedEmoticonsBadgeView *)badgeView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setBadgeView:(SKPUnconsumedEmoticonsBadgeView *)arg1 ;
-(void)updateContent;
@end
