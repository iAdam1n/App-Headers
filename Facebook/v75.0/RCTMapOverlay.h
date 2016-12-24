/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <MapKit/MKPolyline.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, UIColor;

@interface RCTMapOverlay : MKPolyline <MKAnnotation> {

	NSString* _identifier;
	UIColor* _strokeColor;
	double _lineWidth;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                            //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                                 //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(NSString *)identifier;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
@end
