/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIViewController.h>

@protocol BITImageAnnotationDelegate;
@class UIImage, UIImageView, UISegmentedControl, NSMutableArray, UITapGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, BITImageAnnotation;

@interface BITImageAnnotationViewController : UIViewController {

	UIImage* _image;
	id<BITImageAnnotationDelegate> _delegate;
	UIImageView* _imageView;
	UISegmentedControl* _editingControls;
	NSMutableArray* _objects;
	UITapGestureRecognizer* _tapRecognizer;
	UIPanGestureRecognizer* _panRecognizer;
	UIPinchGestureRecognizer* _pinchRecognizer;
	double _scaleFactor;
	BITImageAnnotation* _currentAnnotation;
	long long _currentInteraction;
	CGPoint _panStart;
	CGRect _pinchStartingFrame;

}

@property (nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<BITImageAnnotationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * editingControls;                        //@synthesize editingControls=_editingControls - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                    //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                      //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panRecognizer;                      //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchRecognizer;                  //@synthesize pinchRecognizer=_pinchRecognizer - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                          //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) CGPoint panStart;                                            //@synthesize panStart=_panStart - In the implementation block
@property (nonatomic,retain) BITImageAnnotation * currentAnnotation;                      //@synthesize currentAnnotation=_currentAnnotation - In the implementation block
@property (assign,nonatomic) long long currentInteraction;                                //@synthesize currentInteraction=_currentInteraction - In the implementation block
@property (assign,nonatomic) CGRect pinchStartingFrame;                                   //@synthesize pinchStartingFrame=_pinchStartingFrame - In the implementation block
-(void)setEditingControls:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)editingControls;
-(void)editingAction:(id)arg1 ;
-(void)panned:(id)arg1 ;
-(void)pinched:(id)arg1 ;
-(void)setPinchRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)pinchRecognizer;
-(void)discard:(id)arg1 ;
-(void)fitImageViewFrame;
-(id)extractImage;
-(long long)currentInteraction;
-(void)setCurrentInteraction:(long long)arg1 ;
-(BOOL)canDrawNewAnnotation;
-(id)annotationForCurrentMode;
-(id)firstAnnotationThatIsNotBlur;
-(void)setPanStart:(CGPoint)arg1 ;
-(CGPoint)panStart;
-(void)setPinchStartingFrame:(CGRect)arg1 ;
-(CGRect)pinchStartingFrame;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<BITImageAnnotationDelegate>)arg1 ;
-(id<BITImageAnnotationDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(UIImage *)image;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)save:(id)arg1 ;
-(BITImageAnnotation *)currentAnnotation;
-(void)setCurrentAnnotation:(BITImageAnnotation *)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(NSMutableArray *)objects;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)panRecognizer;
-(void)setPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)tapped:(id)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
@end

