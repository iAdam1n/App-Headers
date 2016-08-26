/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOpenGLFilter.h>

@class FBOpenGLFilter;

@interface FBSplitFilter : FBOpenGLFilter {

	double _dividerXPercentage;
	FBOpenGLFilter* _leftFilter;
	FBOpenGLFilter* _rightFilter;
	int _inputPixelFormat;
	GLKMatrix4 _contentTransform;
	GLKMatrix4 _textureTransform;

}

@property (nonatomic,retain) FBOpenGLFilter * leftFilter;               //@synthesize leftFilter=_leftFilter - In the implementation block
@property (nonatomic,retain) FBOpenGLFilter * rightFilter;              //@synthesize rightFilter=_rightFilter - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 textureTransform;              //@synthesize textureTransform=_textureTransform - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(id)initWithLeftFilter:(id)arg1 rightFilter:(id)arg2 dividerXPercentage:(double)arg3 ;
-(int)inputPixelFormat;
-(void)setInputPixelFormat:(int)arg1 ;
-(_GLKMatrix4)contentTransform;
-(_GLKMatrix4)textureTransform;
-(void)processCommand:(id)arg1 ;
-(FBOpenGLFilter *)leftFilter;
-(void)setLeftFilter:(FBOpenGLFilter *)arg1 ;
-(FBOpenGLFilter *)rightFilter;
-(void)setRightFilter:(FBOpenGLFilter *)arg1 ;
@end
