/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMediaPickerGalleryItem.h>
#import <Telegram/TGModernGallerySelectableItem.h>
#import <Telegram/TGModernGalleryEditableItem.h>

@class TGMediaSelectionContext, TGMediaEditingContext, AVURLAsset, NSString;

@interface TGMediaPickerGalleryVideoItem : TGMediaPickerGalleryItem <TGModernGallerySelectableItem, TGModernGalleryEditableItem> {

	CGSize _dimensions;
	double _duration;
	TGMediaSelectionContext* selectionContext;
	TGMediaEditingContext* editingContext;
	AVURLAsset* _avAsset;

}

@property (nonatomic,readonly) AVURLAsset * avAsset;                                  //@synthesize avAsset=_avAsset - In the implementation block
@property (nonatomic,readonly) CGSize dimensions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TGMediaSelectionContext * selectionContext; 
@property (nonatomic,retain) TGMediaEditingContext * editingContext; 
-(id)selectableMediaItem;
-(TGMediaSelectionContext *)selectionContext;
-(void)setSelectionContext:(TGMediaSelectionContext *)arg1 ;
-(id)editableMediaItem;
-(int)toolbarTabs;
-(id)initWithFileURL:(id)arg1 dimensions:(CGSize)arg2 duration:(double)arg3 ;
-(id)durationSignal;
-(BOOL)isEqual:(id)arg1 ;
-(id)uniqueId;
-(Class)viewClass;
-(CGSize)dimensions;
-(AVURLAsset *)avAsset;
-(TGMediaEditingContext *)editingContext;
-(void)setEditingContext:(TGMediaEditingContext *)arg1 ;
@end
