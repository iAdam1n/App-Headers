/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRCommandDelegate <NSObject>
@required
-(void)mrCommand:(id)arg1 createCalendarEventWithParams:(id)arg2;
-(void)mrCommand:(id)arg1 playVideoWithURL:(id)arg2;
-(void)mrCommand:(id)arg1 storePictureWithURL:(id)arg2;
-(void)mrCommand:(id)arg1 shouldUseCustomClose:(BOOL)arg2;
-(void)mrCommand:(id)arg1 setOrientationPropertiesWithForceOrientation:(unsigned long long)arg2;
-(void)mrCommand:(id)arg1 openURL:(id)arg2;
-(void)mrCommand:(id)arg1 expandWithParams:(id)arg2;
-(void)mrCommand:(id)arg1 resizeWithParams:(id)arg2;
-(void)mrCommandClose:(id)arg1;

@end
