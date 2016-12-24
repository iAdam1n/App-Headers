/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Reddit/Reddit-Structs.h>
@class NSCharacterSet, NSMutableArray, NSArray;

@interface PocketSVG : NSObject {

	CGPoint _lastPoint;
	CGPoint _lastControlPoint;
	BOOL _validLastControlPoint;
	NSCharacterSet* _commandSet;
	NSMutableArray* _tokens;
	double _width;
	double _height;
	NSArray* _beziers;

}

@property (nonatomic,readonly) double width;                   //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                  //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSArray * beziers;              //@synthesize beziers=_beziers - In the implementation block
-(void)parseSVG:(id)arg1 ;
-(id)strokesFromXML:(id)arg1 ;
-(UIBezierPath*)bezierFromPathElement:(id)arg1 ;
-(UIBezierPath*)bezierFromLineElement:(id)arg1 ;
-(UIBezierPath*)bezierFromPolylineElement:(id)arg1 ;
-(id)parsePath:(id)arg1 ;
-(UIBezierPath*)generateBezierFromTokens:(id)arg1 ;
-(void)appendSVGMCommand:(id)arg1 toBezier:(UIBezierPath*)arg2 ;
-(void)appendSVGLCommand:(id)arg1 toBezier:(UIBezierPath*)arg2 ;
-(void)appendSVGCCommand:(id)arg1 toBezier:(UIBezierPath*)arg2 ;
-(void)appendSVGSCommand:(id)arg1 toBezier:(UIBezierPath*)arg2 ;
-(id)initFromSVGFile:(id)arg1 ;
-(id)initFromSVGFilename:(id)arg1 fileExtension:(id)arg2 ;
-(id)initFromSVGXML:(id)arg1 ;
-(id)initFromSVGData:(id)arg1 ;
-(id)initFromSVGString:(id)arg1 ;
-(NSArray *)beziers;
-(void)reset;
-(double)width;
-(double)height;
@end
