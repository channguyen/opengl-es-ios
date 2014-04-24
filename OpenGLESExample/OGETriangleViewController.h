//
//  OGEViewController.h
//  OpenGLESExample
//
//  Created by chan on 4/23/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <GLKit/GLKit.h>

@interface OGETriangleViewController : GLKViewController  {
    GLuint _vertexBufferId;
}

@property (strong, nonatomic) GLKBaseEffect *baseEffect;

@end
