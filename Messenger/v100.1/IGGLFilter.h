/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/IGFilter.h>

@class IGContext, NSBundle;

@interface IGGLFilter : IGFilter {

	IGContext* _context;
	NSBundle* _assetBundle;

}

@property (nonatomic,retain) NSBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)fullVertexShader;
-(id)fullFragmentShader;
-(id)shaderConstsForSplineSamplers;
-(id)textureWithContentsOfData:(id)arg1 ;
-(id)programForContext:(id)arg1 ;
-(NSBundle *)assetBundle;
-(void)setAssetBundle:(NSBundle *)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)init;
-(id)samplers;
-(id)textureNamed:(id)arg1 ;
@end
