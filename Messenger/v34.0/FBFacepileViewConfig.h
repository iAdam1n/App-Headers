/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <Messenger/FBFIGConfig.h>

@class NSArray, UIImage, UIColor, FBImageDownloader, NSString;

@interface FBFacepileViewConfig : FBValueObject <FBFIGConfig> {

	BOOL _scrollable;
	unsigned long long _maximumNumberOfItems;
	unsigned long long _maximumNumberOfRows;
	NSArray* _items;
	unsigned long long _itemSize;
	unsigned long long _itemStyle;
	UIImage* _itemDefaultImage;
	UIColor* _itemsBackgroundColor;
	double _itemSpacing;
	UIColor* _itemBorderLineColor;
	double _itemBorderLineWidth;
	UIColor* _backgroundColor;
	FBImageDownloader* _imageDownloader;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) unsigned long long maximumNumberOfItems;              //@synthesize maximumNumberOfItems=_maximumNumberOfItems - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfRows;               //@synthesize maximumNumberOfRows=_maximumNumberOfRows - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long itemSize;                          //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) unsigned long long itemStyle;                         //@synthesize itemStyle=_itemStyle - In the implementation block
@property (nonatomic,copy,readonly) UIImage * itemDefaultImage;                      //@synthesize itemDefaultImage=_itemDefaultImage - In the implementation block
@property (nonatomic,copy,readonly) UIColor * itemsBackgroundColor;                  //@synthesize itemsBackgroundColor=_itemsBackgroundColor - In the implementation block
@property (nonatomic,readonly) double itemSpacing;                                   //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (nonatomic,copy,readonly) UIColor * itemBorderLineColor;                   //@synthesize itemBorderLineColor=_itemBorderLineColor - In the implementation block
@property (nonatomic,readonly) double itemBorderLineWidth;                           //@synthesize itemBorderLineWidth=_itemBorderLineWidth - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                                  //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) BOOL scrollable;                                      //@synthesize scrollable=_scrollable - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * imageDownloader;                  //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithMaximumNumberOfItems:(unsigned long long)arg1 maximumNumberOfRows:(unsigned long long)arg2 items:(id)arg3 itemSize:(unsigned long long)arg4 itemStyle:(unsigned long long)arg5 itemDefaultImage:(id)arg6 itemsBackgroundColor:(id)arg7 itemSpacing:(double)arg8 itemBorderLineColor:(id)arg9 itemBorderLineWidth:(double)arg10 insets:(UIEdgeInsets)arg11 scrollable:(BOOL)arg12 backgroundColor:(id)arg13 imageDownloader:(id)arg14 ;
-(FBImageDownloader *)imageDownloader;
-(BOOL)scrollable;
-(UIImage *)itemDefaultImage;
-(UIColor *)itemsBackgroundColor;
-(unsigned long long)itemStyle;
-(double)itemBorderLineWidth;
-(UIColor *)itemBorderLineColor;
-(id)_initWithMaximumNumberOfItems:(unsigned long long)arg1 maximumNumberOfRows:(unsigned long long)arg2 items:(id)arg3 itemSize:(unsigned long long)arg4 itemStyle:(unsigned long long)arg5 itemDefaultImage:(id)arg6 itemsBackgroundColor:(id)arg7 itemSpacing:(double)arg8 itemBorderLineColor:(id)arg9 itemBorderLineWidth:(double)arg10 insets:(UIEdgeInsets)arg11 scrollable:(BOOL)arg12 backgroundColor:(id)arg13 imageDownloader:(id)arg14 ;
-(unsigned long long)maximumNumberOfItems;
-(UIColor *)backgroundColor;
-(NSArray *)items;
-(double)itemSpacing;
-(unsigned long long)itemSize;
-(UIEdgeInsets)insets;
-(unsigned long long)maximumNumberOfRows;
@end

