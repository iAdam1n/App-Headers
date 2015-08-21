/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL;

@interface ANMRAIDExpandProperties : NSObject {

	BOOL _useCustomClose;
	double _width;
	double _height;
	NSURL* _URL;

}

@property (nonatomic,readonly) double width;                     //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                    //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL useCustomClose;              //@synthesize useCustomClose=_useCustomClose - In the implementation block
+(id)expandPropertiesFromQueryComponents:(id)arg1 ;
-(BOOL)useCustomClose;
-(id)initWithWidth:(double)arg1 height:(double)arg2 URL:(id)arg3 useCustomClose:(BOOL)arg4 ;
-(id)description;
-(double)width;
-(double)height;
-(NSURL *)URL;
@end

