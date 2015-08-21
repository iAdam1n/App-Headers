/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MKMapViewDelegate.h>

@protocol MNMessageLocationAttachmentDetailViewDelegate;
@class MKMapView, NSString;

@interface MNMessageLocationAttachmentDetailView : UIView <MKMapViewDelegate> {

	MKMapView* _mapView;
	id<MNMessageLocationAttachmentDetailViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageLocationAttachmentDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAnnotation:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MNMessageLocationAttachmentDetailViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMessageLocationAttachmentDetailViewDelegate>)delegate;
@end

