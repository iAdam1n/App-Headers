/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class FBFacepileViewItem;

@interface _FBFacepileViewButton : UIButton {

	FBFacepileViewItem* _item;
	unsigned long long _index;

}

@property (nonatomic,copy) FBFacepileViewItem * item;               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(FBFacepileViewItem *)item;
-(void)setItem:(FBFacepileViewItem *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end
