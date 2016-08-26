/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
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
-(void)setBadgeView:(SKPUnconsumedEmoticonsBadgeView *)arg1 ;
-(void)dealloc;
-(SKPUnconsumedEmoticonsBadgeView *)badgeView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateContent;
@end
