//
//  SWEditor.h
//  Paintbrush
//
//  Created by Mike Schreiber on 12/27/10.
//  Copyright 2010 University of Arizona. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@protocol SWEditor <NSObject>

@required

// Handling events
- (BOOL)handleMouseDown:(NSEvent *)event;
- (BOOL)handleMouseUp:(NSEvent *)event;
- (BOOL)handleMouseDragged:(NSEvent *)event;

- (BOOL)handleKeyDown:(NSEvent *)event;

// Drawing content
- (void)renderToContext:(CGContextRef)context withFrame:(NSRect)frame;

@end
