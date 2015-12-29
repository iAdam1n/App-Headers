//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGPhotoEditorToolView.h"

@class NSString, TGPhotoEditorSliderView;

@interface TGPhotoEditorGenericToolView : UIView <TGPhotoEditorToolView>
{
    TGPhotoEditorSliderView *_sliderView;
    _Bool isLandscape;
    CDUnknownBlockType _titleChanged;
    CDUnknownBlockType _valueChanged;
    id _value;
    double toolbarLandscapeSize;
    struct CGSize actualAreaSize;
}

@property(nonatomic) double toolbarLandscapeSize; // @synthesize toolbarLandscapeSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape;
@property(nonatomic) struct CGSize actualAreaSize; // @synthesize actualAreaSize;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType valueChanged; // @synthesize valueChanged=_valueChanged;
@property(copy, nonatomic) CDUnknownBlockType titleChanged; // @synthesize titleChanged=_titleChanged;
- (void).cxx_destruct;
- (_Bool)buttonPressed:(_Bool)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool hideTitle;
- (void)sliderValueChanged:(id)arg1;
@property(readonly, nonatomic) _Bool isTracking;
@property(copy, nonatomic) CDUnknownBlockType interactionEnded; // @dynamic interactionEnded;
- (id)initWithEditorItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
